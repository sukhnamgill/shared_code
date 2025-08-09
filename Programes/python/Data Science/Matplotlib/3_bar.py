import matplotlib.pyplot as pt
prg=["Python","C","Java","Swift"]
rating=[10,8,8,9]
pt.bar(prg,rating,color="green",align="edge",edgecolor="gray",linewidth=10,alpha=0.5,label="sukhnam")
pt.legend()
pt.title("Top Four Language with Ranking",fontsize=20,color="blue")
pt.xlabel("Language",fontsize=15)
pt.ylabel("Rank",fontsize=15)
pt.show()
