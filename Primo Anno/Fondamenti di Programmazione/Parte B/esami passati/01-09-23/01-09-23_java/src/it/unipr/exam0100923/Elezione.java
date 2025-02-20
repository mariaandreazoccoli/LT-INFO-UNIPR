package it.unipr.exam0100923;

public class Elezione {
	private Coalizione[] coalizioniPartecipanti;
	private int numCoalizioni;
	private int dim;
	
	public Elezione () {
		this.dim = 10;
		this.coalizioniPartecipanti = new Coalizione[dim];
		this.numCoalizioni = 0;
	}
	
	public void add (Coalizione coalizione) {
		if (this.dim == this.numCoalizioni) {
			Coalizione[] tmp = new Coalizione [dim *= 2];
			for (int i = 0; i < numCoalizioni; i++)
				tmp[i] = this.coalizioniPartecipanti[i];
			this.coalizioniPartecipanti = tmp;
			this.dim *= 2; 
		}
		for (int i = 0; i < numCoalizioni; i++) {
			if (this.coalizioniPartecipanti[i].equals(coalizione))
				throw new IllegalArgumentException("La coalizione è sstata già inserita.");
		}
		this.coalizioniPartecipanti[numCoalizioni++] = coalizione;
	}
	
	public Coalizione winner () {
		if (numCoalizioni == 0)
			return null;
		Coalizione win = coalizioniPartecipanti[0];
		for (int i = 1; i < numCoalizioni; i++) {
			if (win.getVoti() < this.coalizioniPartecipanti[i].getVoti())
				win = this.coalizioniPartecipanti[i]; 
		}
		return win;
	}
}
