# CPU Scheduling

CPU scheduling is a fundamental aspect of operating system design that determines which processes in the ready queue are allocated to the CPU. Efficient CPU scheduling enhances system performance by maximizing CPU utilization, ensuring fair process distribution, and minimizing response time.

## Types of CPU Scheduling Algorithms

### 1. First-Come, First-Served (FCFS)

- **Description**: FCFS is the simplest scheduling algorithm. The process that arrives first gets executed first.
- **Characteristics**:
  - Non-preemptive
  - Easy to implement
  - Can lead to the "convoy effect," where shorter processes get stuck waiting behind longer processes

- **Limitations**:
  - Poor performance for short processes
  - Average waiting time can be high
  - Not suitable for time-sharing systems

- **Applications**:
  - Batch processing systems where all jobs are similar in size and importance
  - Environments where simplicity and ease of implementation are priorities

### 2. Shortest Job First (SJF)

- **Description**: SJF schedules processes based on the length of their next CPU burst. The process with the shortest burst time gets executed first.
- **Characteristics**:
  - Can be preemptive or non-preemptive
  - Minimizes average waiting time
  - Difficult to implement because it requires knowledge of future burst times

- **Limitations**:
  - Difficult to predict the length of the next CPU burst
  - Risk of starvation for longer processes
  - Not suitable for time-sharing systems

- **Applications**:
  - Batch processing systems where job lengths are known in advance
  - Environments where minimizing average waiting time is critical

### 3. Round Robin (RR)

- **Description**: RR assigns a fixed time unit (time quantum) to each process in the ready queue and cycles through them.
- **Characteristics**:
  - Preemptive
  - Ensures fair sharing of CPU time
  - Performance depends on the length of the time quantum

- **Limitations**:
  - Selecting an appropriate time quantum is challenging
  - Can lead to high context-switching overhead
  - Average waiting time can be high for processes with varying execution times

- **Applications**:
  - Time-sharing systems where fairness is essential
  - Interactive systems where quick response time is needed

### 4. Priority Scheduling

- **Description**: Processes are scheduled based on priority. Higher priority processes are executed before lower priority ones.
- **Characteristics**:
  - Can be preemptive or non-preemptive
  - May lead to "starvation" of lower priority processes
  - Can be mitigated using "aging," which gradually increases the priority of waiting processes

- **Limitations**:
  - Risk of starvation for low-priority processes
  - Determining priority levels can be complex
  - Not suitable for systems requiring strict fairness

- **Applications**:
  - Real-time systems where certain tasks must be executed immediately
  - Systems with mixed workloads requiring different levels of service

---
