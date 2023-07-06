import pywhatkit as kit

txt = '''Name - Tanishq Verma
Roll No. - 22BMA043
Section - D/D3

Material Science and Engineering Assignment

Magnetic Properties of Materials
Magnetic material is one that can repel or attract other materials. The process of attraction or repulsion of these materials depends on the arrangement of electrons, which is known as the magnetic moment of that material. On the basis of the behaviour of materials when they are present in a magnetic field, the materials are divided into three categories. The three categories of materials are as follows: 
•	Diamagnetic - With regard to the susceptibility χ, a material is diamagnetic if χ is negative. These materials produce negative magnetization when they are placed in the magnetic field. When placed in a magnetic field, these diamagnetic materials are barely magnetized. Diamagnetic substances are the ones that are repelled by magnets. Examples of some diamagnetic materials are silicon, lead, copper, bismuth, etc. They tend to move from the stronger parts of the external magnetic field to the weaker ones. The magnetic dipoles of these substances align in opposition to the applied field, producing an internal magnetic field that opposes the applied field thus producing repulsion. 
•	Paramagnetic - In the presence of an external magnetic field, the substances that get weakly magnetized are known as paramagnetic substances. The magnetic dipoles align along the direction of the applied field, reinforcing and enhancing the magnetic field. These substances get weakly attracted to a magnet as they tend to move from a weaker magnetic field to a stronger one. The atoms present in paramagnetic materials have a permanent magnetic dipole moment. When placed in an external field, the field is enhanced and the field lines get concentrated inside the substance. In a non-uniform magnetic field, the material tends to move from a weaker field to a stronger one. Examples of some paramagnetic materials are calcium, aluminium, sodium, etc. The magnetization (M) of paramagnetic materials, discovered by Madam Curie, depends on the temperature (T) and the external magnetic field B.
M = C x (B/T),
where M = Magnetization
C = Curie Constant
B = External magnetic field
T = Temperature
•	Ferromagnetic- The materials strongly attracted by the magnetic field are known as ferromagnetic materials. Even when the external field is removed, these materials retain the magnetism. These materials possess the strongest magnetic behaviour and thus tend to move from a field of a weak magnetic field to the strongest one. As in a paramagnetic material, the atoms of the ferromagnetic material also possess a dipole moment. But in the case of ferromagnetic materials, the atoms interact with each other to align themselves in a common direction. The arrangement of dipoles in a perfect domain produces strong magnetic fields. In the absence of an electric field, these domains are arranged in a random manner thus cancelling the magnetic field of each domain so that the material or substance does not show any magnetic behaviour. When an external magnetic field is applied, however, the domains of the material reorient themselves in order to strengthen the external field to produce an internal strong magnetic field along the direction of the external field. Examples of some paramagnetic materials are Iron, nickel, cobalt, etc.
Types of Magnetic Properties
1.	Intensity of magnetization (I)
Magnetization or intensity of magnetization indicates the net dipole moment per unit volume.

2.	Magnetic intensity or Magnetic field (H)
The external magnetic field that is only produced by electric current flowing in a solenoid is known as magnetic intensity.

3.	Magnetic susceptibility
For a small magnetizing field, the intensity of magnetization which material possesses is in direct proportion to the magnetic field (H).
I ∝ H
I = Xm.H, where Xm is the susceptibility of the material.

4.	Retentivity
Retentivity is the ability of a material to retain magnetization.

5.	Coercivity
The ability of a material to withstand the external magnetic field without being demagnetized.



Thermal Properties of Materials
Thermal properties of engineering materials are a study of those substances which have a direct relation to the temperature fluctuations. Whenever materials come in contact with heat or thermal change, they tend to change in dimensions such as length or volume. Moreover, there is a fluctuation in the temperature of solids when it absorbs heat energy. 
The properties of materials help to ascertain how it will respond when it comes in contact with heat. For instance, when a metal comes in contact with heat, its temperature rises, and it tends to melt at high temperature as it reaches its melting point.

The thermophysical properties of materials consist of the following:
•	Heat Capacity: It is the measure of heat that is necessary to raise the temperature of the material. It is the ratio of heat energy transferred into a substance that results in the temperature change. 
Mathematically, it can be stated as the following:
C= ∆Q/∆T= dQ/dT
Where C = Specific heat which gets expressed as per mole,
T = Temperature 
Q = Energy
dT = Fluctuations in temperature
dQ =Energy transferred (added or deducted) to cause a change in temperature.
One can measure heat capacity under two conditions which are constant pressure and volume. The formula is:
CV = (dq/dT)V - heat at constant volume
CP = (dq/dT)P - heat at constant pressure
For solids and liquids, there is a small difference between CP and CV since the expansion is less in these substances after they are subject to heating. However, for gases, CV is always less than CP as the material expands when it absorbs heat.

•	Thermal expansion: When any substance absorbs heat or faces temperature changes, there is a change in its volume and length. Thermal expansion occurs in materials when heat passes through the atoms, and they move from their equilibrium.
The formulas of linear and volume expansion are:
Linear: (lf - l0)/l0 = ∆l/l0 = αl (Tf -T0) = α1-∆T 
Where l0 = initial length, lf = final length.
Volume: (Vf -V0)/V0 = ∆V/V0 = αV (TV -T0) = α1- ∆T
Where V0 = initial volume, Vf = final volume.
•	Thermal conductivity: One of the vital components of the thermal properties of materials is its conductivity. Thermal conductivity is the measure of heat transferring capability of a material. Through it, one can ascertain how substances can conduct energy and the direction of its flow.
According to Fourier's law, energy transfer through solids can be expressed as:
q = -k (dT/dx)
Where q = quantity of heat flowing from a unit area in a specific time
K denotes thermal conductivity
T = temperature
X = direction of energy flow
•	Thermal stresses: It is the tension created in materials resulting from temperature fluctuations or energy absorption. This category of thermal properties of materials can result in deformation or fracture occurring from dimensional changes. The study of thermal properties of nanomaterials is vast, and it gets confined to a limited area of knowledge. Moreover, it has broad applications in the field of thermodynamics and study of heat conductivity, etc.'''

txt2 = 'Hi I am Tanishq'
kit.text_to_handwriting(txt2)
print('done')