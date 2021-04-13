#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int disk_l;
int disk_m;
int disk_s;
int final_goal;
int c=0;
class state
{
public:
    int color=0;
    int disk_L;
    int disk_M;
    int disk_S;

	state()
	{
	   /* disk_L=1;
	    disk_M=1;
	    disk_S=1;*/

	}
	state(int p,int q,int r)
	{
		disk_L=p;
		disk_M=q;
		disk_S=r;

	}
	void calc()
	{

	}
	void print()
	{
		cout<<"State Condition: ";
		cout<<disk_L<<" "<<disk_M<<" "<<disk_S<<endl;
	//	cout<<endl;
	}
	state* gen_next_state()
	{
		state *genarated;
		genarated=new state[2];

		int initial_disk_L=disk_L;
		int initial_disk_M=disk_M;
		int initial_disk_S=disk_S;
		//cout<<initial_disk_L<<" "<<initial_disk_M<<" "<<initial_disk_S<<" "<<endl;

		if(initial_disk_L==initial_disk_M && initial_disk_M==initial_disk_S)
        {
            if(initial_disk_S==1)
            {
              //j cout<<"HERE BUSSY";
                genarated[0].disk_L=initial_disk_L;
                genarated[0].disk_M=initial_disk_M;
                genarated[0].disk_S=3;

               genarated[1].disk_L=initial_disk_L;
                genarated[1].disk_M=initial_disk_M;
                genarated[1].disk_S=2;
                //cout<<"GENERATED";*/

            }

        }


        else if(initial_disk_L!=initial_disk_M && initial_disk_M!=initial_disk_S )
        {
          //  cout<<"HERE i AM    ";
             if(initial_disk_S>initial_disk_L)
             {
                 if(initial_disk_M==2)
                 {
                genarated[0].disk_L=initial_disk_L;
                genarated[0].disk_M=initial_disk_M;
                genarated[0].disk_S=2;

                genarated[1].disk_L=initial_disk_L;
                genarated[1].disk_M=initial_disk_M;
                genarated[1].disk_S=1;
                 }
                  else  if(initial_disk_M==3)
                 {
                genarated[0].disk_L=initial_disk_L;
                genarated[0].disk_M=initial_disk_M;
                genarated[0].disk_S=3;

                genarated[1].disk_L=initial_disk_L;
                genarated[1].disk_M=initial_disk_M;
                genarated[1].disk_S=1;
                 }
             }
              if(initial_disk_L>initial_disk_S)
             {
                 if(initial_disk_M==2)
                 {
                genarated[0].disk_L=initial_disk_L;
                genarated[0].disk_M=3;
                genarated[0].disk_S=initial_disk_S;
                 }
                 else if(initial_disk_M==3)
                 {
                genarated[0].disk_L=initial_disk_L;
                genarated[0].disk_M=2;
                genarated[0].disk_S=initial_disk_S;
                 }

             }
        }
         else if(initial_disk_L==initial_disk_M && initial_disk_M!=initial_disk_S)
        {
            //cout<<"HERE2";
            if(initial_disk_M==1)
            {
                if(initial_disk_S==2)
                {
                    genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=3;
                    genarated[0].disk_S=initial_disk_S;
                }
                else if(initial_disk_S==3)
                {
                    genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=2;
                    genarated[0].disk_S=initial_disk_S;
                }

            }
            else if(initial_disk_M==2)
            {
                    genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=initial_disk_M;
                    genarated[0].disk_S=2;

                    genarated[1].disk_L=initial_disk_L;
                    genarated[1].disk_M=initial_disk_M;
                    genarated[1].disk_S=3;
            }
            else if(initial_disk_M==3)
            {

                    genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=initial_disk_M;
                    genarated[0].disk_S=3;

                    genarated[1].disk_L=initial_disk_L;
                    genarated[1].disk_M=initial_disk_M;
                    genarated[1].disk_S=2;

            }
        }

        else if(initial_disk_L==initial_disk_S && initial_disk_S!=initial_disk_M)
        {
       // cout<<"HERE3";
            if(initial_disk_S==2)
            {
               if(initial_disk_M==3)
               {
                   genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=1;
                    genarated[0].disk_S=initial_disk_S;
               }
               else if (initial_disk_M==1)
               {
                    genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=initial_disk_M;
                    genarated[0].disk_S=3;

                    genarated[1].disk_L=initial_disk_L;
                    genarated[1].disk_M=initial_disk_M;
                    genarated[1].disk_S=1;

               }
            }

             else if(initial_disk_S==3)
            {
               if(initial_disk_M==2)
               {
                   genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=1;
                    genarated[0].disk_S=initial_disk_S;
               }
               else if (initial_disk_M==1)
               {
                    genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=initial_disk_M;
                    genarated[0].disk_S=1;

                    genarated[1].disk_L=initial_disk_L;
                    genarated[1].disk_M=initial_disk_M;
                    genarated[1].disk_S=2;

               }
            }
            else
            {
                cout<<"NO GEN"<<endl;
            }
        }
        else if(initial_disk_M==initial_disk_S && initial_disk_M!=initial_disk_L)
        {
            //cout<<"HERE 3 ";
            if(initial_disk_S==2)
            {
                if(initial_disk_L==3)
                {
                    genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=initial_disk_M;
                    genarated[0].disk_S=1;

                    genarated[1].disk_L=initial_disk_L;
                    genarated[1].disk_M=initial_disk_M;
                    genarated[1].disk_S=3;




                }
                else if (initial_disk_L==1)
                {
                    genarated[0].disk_L=3;
                    genarated[0].disk_M=initial_disk_M;
                    genarated[0].disk_S=initial_disk_S;
                }
            }

            else  if(initial_disk_S==3)
            {
                if(initial_disk_L==2)
                {
                    genarated[0].disk_L=initial_disk_L;
                    genarated[0].disk_M=initial_disk_M;
                    genarated[0].disk_S=1;

                    genarated[1].disk_L=initial_disk_L;
                    genarated[1].disk_M=initial_disk_M;
                    genarated[1].disk_S=2;

                }
                else if (initial_disk_L==1)
                {
                    genarated[0].disk_L=2;
                    genarated[0].disk_M=initial_disk_M;
                    genarated[0].disk_S=initial_disk_S;
                }
            }
        }
        else
        {
            cout<<"NO GEN"<<endl;
        }


		return genarated;

	}

};
state final_goal_state;
state initial_state;
class mapping
{
	public:
	state parent;
	state child;
};
mapping m[100];
class bfs
{
	list<state> li;
	map<state,state> Map;

public:
	bfs()
	{

	}
	bool check_goal(state src)
	{

		if (src.disk_L==final_goal && src.disk_M==final_goal && src.disk_S==final_goal)
		{
			cout<<"GOAL STATE FOUND"<<endl;
            // cout<<src.disk_L<<" "<<src.disk_M<<" "<< src.disk_S<<" ";
			return true;
		}
		else
		{
			return false;
		}

	}
	void back_track(state p,state q)
	{
		list<state> pq;
		cout<<"Backtrack"<<endl;

		pq.push_back(q);

		cout<<endl;
		x:
		for (int i=0;i<c;i++)
		{
			if(m[i].child.disk_L==p.disk_L && m[i].child.disk_M==p.disk_M && m[i].child.disk_S==p.disk_S)
			{
			//	p.print();
				pq.push_back(p);

				//cout<<"Parent found"<<endl;
				p=m[i].parent;
				q=m[i].child;
			//	q.print();
				if(p.disk_L==initial_state.disk_L && p.disk_M== initial_state.disk_M && p.disk_S==initial_state.disk_S )
				{
				//	p.print();

					pq.push_back(p);
					//cout<<"Source found"<<endl;
					break;
				}
				else
				{
					goto x;
				}

			}
		}
		int k=1;
		pq.reverse();
		while(pq.size())
		{
			cout<<"Step : "<<k<<endl;
			state w=pq.front();
			w.print();
			w.calc();
			cout<<endl;

			pq.pop_front();
			k++;
		}
		cout<<"Goal Reached"<<endl;

	}
	void run_bfs(state src)
	{
		if(check_goal(src))
		{
			cout<<"No Steps Required"<<endl;


		}
		else
		{
		//	cout<<"did not find goal"<<endl;
			int flag=0;

			li.push_back(src);
			while(!li.empty())
			{
				state p=li.front();
				li.pop_front();

				flag=0;
				state *q;
				q=p.gen_next_state();
				//cout<<q[0].disk_L<<q[0].disk_M<<q[0].disk_S<<endl;
				//q[0].print();
				for (int i = 0; i < 2; ++i)
				{
					if(check_goal(q[i]))
					{
						//cout<<"found goal"<<endl;
						q[i].print();
						flag=1;
						final_goal_state=q[i];

						back_track(p,q[i]);
						break;
					}
					else
					{
					   // q[0].print();
					    //cout<<"I am Here";
						if(q[i].color==0)
						{
							li.push_back(q[i]);
							q[i].color=1;

							m[c].child=q[i];
							m[c].parent=p;
							c++;
						}
					}
					/* code */
				}
				if(flag==1)
				{
					break;
				}


			}
		}



	}


};


int main()
{
	disk_l=1;
	disk_m=1;
	disk_s=1;
	final_goal=3;

	state src(disk_l,disk_m,disk_s);
	//cout<<src.disk_L;
	initial_state=src;
	bfs bs;
	bs.run_bfs(src);


}

