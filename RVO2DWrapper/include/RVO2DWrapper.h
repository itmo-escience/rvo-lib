// RVO2DWrapper.h

#pragma once

#include "../../RVO/include/RVOSimulator.h"
#include "RvoVector2.h"

using namespace System;

namespace RVO2D {
	public ref class RVOSimulator
	{
		private:
				RVO::RVOSimulator* _sim;
			public:
				RVOSimulator();	
				RVOSimulator(float timeStep, float neighborDist, int maxNeighbors, float timeHorizon,float obsHorizon ,float radius, float maxSpeed,RvoVector2 velocity);
				~RVOSimulator();

				int addAgent(RvoVector2 position);
				int addAgent(RvoVector2 position, float neighborDist, int maxNeighbors, float timeHorizon,float timeHorizonObst, float radius, float maxSpeed, RvoVector2 velocity );
				void doStep();

				int getAgentAgentNeighbor(int agentNo, int neighborNo) ;
				int getAgentMaxNeighbors(int agentNo) ;
				float getAgentMaxSpeed(int agentNo) ;

				float getAgentNeighborDist(int agentNo) ;
				int getAgentNumAgentNeighbors(int agentNo) ;

				RvoVector2  getAgentPosition(int agentNo) ;
				RvoVector2  getAgentPrefVelocity(int agentNo) ;

				void getAgentPositions(array<int>^ agentNos, array<RvoVector2>^ positions) ;
				void getAgentPrefVelocities(array<int>^ agentNos, array<RvoVector2>^ prefVelocities) ;

				float getAgentRadius(int agentNo) ;
				float getAgentTimeHorizon(int agentNo) ;
				RvoVector2 getAgentVelocity(int agentNo) ;
				float getGlobalTime() ;
				int getNumAgents() ;
				float getTimeStep() ;
				void setAgentDefaults(float neighborDist, int maxNeighbors, float timeHorizon,float obsHorizon, float radius, float maxSpeed, RvoVector2 velocity);
				void setAgentMaxNeighbors(int agentNo, int maxNeighbors);
				void setAgentMaxSpeed(int agentNo, float maxSpeed);
				void setAgentNeighborDist(int agentNo, float neighborDist);
				void setAgentPosition(int agentNo,  RvoVector2 position);
				void setAgentPrefVelocity(int agentNo,  RvoVector2 prefVelocity);
				void setAgentPrefVelocity(array<int>^ agentNo,  array<RvoVector2>^ prefVelocity);

				void setAgentRadius(int agentNo, float radius);
				void setAgentTimeHorizon(int agentNo, float timeHorizon);
				void setAgentVelocity(int agentNo,  RvoVector2 velocity);
				void setAgentVelocity(array<int>^ agentNo,  array<RvoVector2>^ velocity);
				void setTimeStep(float timeStep);	

				int addObstacle(array<RvoVector2>^ vertices);
				int addObstacle(System::Collections::Generic::List<RvoVector2>^ vertices);

				void processObstacles();
				bool queryVisibility(RvoVector2 point1, RvoVector2 point2, float radius) ;
				float getAgentTimeHorizonObst(int agentNo) ;
				void setAgentTimeHorizonObst(int agentNo, float timeHorizonObst);
				
	};
}
