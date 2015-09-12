package org.netfpga.router;
/*
 * RouterDetailsPanel.java
 *
 * Created on June 4, 2007, 7:28 AM
 */

import org.netfpga.backend.NFDevice;
import java.util.Vector;
import javax.swing.JComponent;
import javax.swing.JInternalFrame;
import javax.swing.Timer;
import org.netfpga.mdi.MDIDesktopPane;

/**
 * Implements a Panel with buttons connected together by arrows for the router.
 * @author  jnaous
 * modified by Georgina Kalogeridou, September 2014, Computer Lab, University of Cambridge
 */
@SuppressWarnings("serial")
public class RouterDetailsPanel extends PanelWithShapes {

    /* modules connected by arrows in the details tab */
    private Vector<JComponent> startComps;

    private Vector<JComponent> endComps;

    private NFDevice nf2;

    private Timer updateTimer;

    private AbstractMainFrame mainFrame;

    /**
     * Creates new form RouterDetailsPanel
     */
    public RouterDetailsPanel(NFDevice nf2, Timer updateTimer, AbstractMainFrame mainFrame) {
        this.nf2 = nf2;
        this.updateTimer = updateTimer;
        this.mainFrame = mainFrame;

        initComponents();

        startComps = new Vector<JComponent>();
        endComps = new Vector<JComponent>();

        initializeArrowsComps(startComps, endComps);

        setComponentsList(startComps, endComps);
    }

        /**
     * Sets the components from which to start and end arrows.
     * @param startComps List of start components for arrows
     * @param endComps List of ending components for arrows
     */
    private void initializeArrowsComps(Vector<JComponent> startComps,
            Vector<JComponent> endComps) {
        startComps.add(macRxQ0Button);
        endComps.add(inArbButton);
        startComps.add(macRxQ1Button);
        endComps.add(inArbButton);
        startComps.add(macRxQ2Button);
        endComps.add(inArbButton);
        startComps.add(macRxQ3Button);
        endComps.add(inArbButton);
        startComps.add(cpuRxQ0Button);
        endComps.add(inArbButton);
        //startComps.add(cpuRxQ1Button);
        //endComps.add(inArbButton);
        //startComps.add(cpuRxQ2Button);
        //endComps.add(inArbButton);
        //startComps.add(cpuRxQ3Button);
        //endComps.add(inArbButton);
        startComps.add(inArbButton);
        endComps.add(oplButton);
        startComps.add(oplButton);
        endComps.add(oqButton);
        startComps.add(oqButton);
        endComps.add(macTxQ0Button);
        startComps.add(oqButton);
        endComps.add(macTxQ1Button);
        startComps.add(oqButton);
        endComps.add(macTxQ2Button);
        startComps.add(oqButton);
        endComps.add(macTxQ3Button);
        startComps.add(oqButton);
        endComps.add(cpuTxQ0Button);
        //startComps.add(oqButton);
        //endComps.add(cpuTxQ1Button);
        //startComps.add(oqButton);
        //endComps.add(cpuTxQ2Button);
        //startComps.add(oqButton);
        //endComps.add(cpuTxQ3Button);
    }

    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    // <editor-fold defaultstate="collapsed" desc=" Generated Code ">//GEN-BEGIN:initComponents
    private void initComponents() {
        macRxQ0Button = new javax.swing.JButton();
        //cpuRxQ0Button = new javax.swing.JButton();
        macRxQ1Button = new javax.swing.JButton();
        //cpuRxQ1Button = new javax.swing.JButton();
        macRxQ2Button = new javax.swing.JButton();
        //cpuRxQ2Button = new javax.swing.JButton();
        macRxQ3Button = new javax.swing.JButton();
        //cpuRxQ3Button = new javax.swing.JButton();
	cpuRxQ0Button = new javax.swing.JButton();        
	macTxQ0Button = new javax.swing.JButton();
        //cpuTxQ0Button = new javax.swing.JButton();
        macTxQ1Button = new javax.swing.JButton();
        //cpuTxQ1Button = new javax.swing.JButton();
        macTxQ2Button = new javax.swing.JButton();
        //cpuTxQ2Button = new javax.swing.JButton();
        macTxQ3Button = new javax.swing.JButton();
        //cpuTxQ3Button = new javax.swing.JButton();
	cpuTxQ0Button = new javax.swing.JButton();
        inArbButton = new javax.swing.JButton();
        oplButton = new javax.swing.JButton();
        oqButton = new javax.swing.JButton();

        macRxQ0Button.setFont(new java.awt.Font("Dialog", 0, 10));
        macRxQ0Button.setText("MAC RX Q0");
        macRxQ0Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        macRxQ0Button.setMinimumSize(new java.awt.Dimension(0, 0));
        macRxQ0Button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                macRxQ0ButtonActionPerformed(evt);
            }
        });

        //cpuRxQ0Button.setFont(new java.awt.Font("Dialog", 0, 10));
        //cpuRxQ0Button.setText("CPU RX Q0");
        //cpuRxQ0Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        //cpuRxQ0Button.setMinimumSize(new java.awt.Dimension(0, 0));

        macRxQ1Button.setFont(new java.awt.Font("Dialog", 0, 10));
        macRxQ1Button.setText("MAC RX Q1");
        macRxQ1Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        macRxQ1Button.setMinimumSize(new java.awt.Dimension(0, 0));
        macRxQ1Button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                macRxQ1ButtonActionPerformed(evt);
            }
        });

        //cpuRxQ1Button.setFont(new java.awt.Font("Dialog", 0, 10));
        //cpuRxQ1Button.setText("CPU RX Q1");
        //cpuRxQ1Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        //cpuRxQ1Button.setMinimumSize(new java.awt.Dimension(0, 0));

        macRxQ2Button.setFont(new java.awt.Font("Dialog", 0, 10));
        macRxQ2Button.setText("MAC RX Q2");
        macRxQ2Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        macRxQ2Button.setMinimumSize(new java.awt.Dimension(0, 0));
        macRxQ2Button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                macRxQ2ButtonActionPerformed(evt);
            }
        });

        //cpuRxQ2Button.setFont(new java.awt.Font("Dialog", 0, 10));
        //cpuRxQ2Button.setText("CPU RX Q2");
        //cpuRxQ2Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        //cpuRxQ2Button.setMinimumSize(new java.awt.Dimension(0, 0));

        macRxQ3Button.setFont(new java.awt.Font("Dialog", 0, 10));
        macRxQ3Button.setText("MAC RX Q3");
        macRxQ3Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        macRxQ3Button.setMinimumSize(new java.awt.Dimension(0, 0));
        macRxQ3Button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                macRxQ3ButtonActionPerformed(evt);
            }
        });

	cpuRxQ0Button.setFont(new java.awt.Font("Dialog", 0, 10));
        cpuRxQ0Button.setText("CPU RX");
        cpuRxQ0Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        cpuRxQ0Button.setMinimumSize(new java.awt.Dimension(0, 0));

        //cpuRxQ3Button.setFont(new java.awt.Font("Dialog", 0, 10));
        //cpuRxQ3Button.setText("CPU RX Q3");
        //cpuRxQ3Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        //cpuRxQ3Button.setMinimumSize(new java.awt.Dimension(0, 0));

        macTxQ0Button.setFont(new java.awt.Font("Dialog", 0, 10));
        macTxQ0Button.setText("MAC TX Q0");
        macTxQ0Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        macTxQ0Button.setMinimumSize(new java.awt.Dimension(0, 0));
        macTxQ0Button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                macTxQ0ButtonActionPerformed(evt);
            }
        });

        //cpuTxQ0Button.setFont(new java.awt.Font("Dialog", 0, 10));
        //cpuTxQ0Button.setText("CPU TX Q0");
        //cpuTxQ0Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        //cpuTxQ0Button.setMinimumSize(new java.awt.Dimension(0, 0));

        macTxQ1Button.setFont(new java.awt.Font("Dialog", 0, 10));
        macTxQ1Button.setText("MAC TX Q1");
        macTxQ1Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        macTxQ1Button.setMinimumSize(new java.awt.Dimension(0, 0));
        macTxQ1Button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                macTxQ1ButtonActionPerformed(evt);
            }
        });

        //cpuTxQ1Button.setFont(new java.awt.Font("Dialog", 0, 10));
        //cpuTxQ1Button.setText("CPU TX Q1");
        //cpuTxQ1Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        //cpuTxQ1Button.setMinimumSize(new java.awt.Dimension(0, 0));

        macTxQ2Button.setFont(new java.awt.Font("Dialog", 0, 10));
        macTxQ2Button.setText("MAC TX Q2");
        macTxQ2Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        macTxQ2Button.setMinimumSize(new java.awt.Dimension(0, 0));
        macTxQ2Button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                macTxQ2ButtonActionPerformed(evt);
            }
        });

        //cpuTxQ2Button.setFont(new java.awt.Font("Dialog", 0, 10));
        //cpuTxQ2Button.setText("CPU TX Q2");
        //cpuTxQ2Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        //cpuTxQ2Button.setMinimumSize(new java.awt.Dimension(0, 0));

        macTxQ3Button.setFont(new java.awt.Font("Dialog", 0, 10));
        macTxQ3Button.setText("MAC TX Q3");
        macTxQ3Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        macTxQ3Button.setMinimumSize(new java.awt.Dimension(0, 0));
        macTxQ3Button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                macTxQ3ButtonActionPerformed(evt);
            }
        });

	cpuTxQ0Button.setFont(new java.awt.Font("Dialog", 0, 10));
        cpuTxQ0Button.setText("CPU TX");
        cpuTxQ0Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        cpuTxQ0Button.setMinimumSize(new java.awt.Dimension(0, 0));

        //cpuTxQ3Button.setFont(new java.awt.Font("Dialog", 0, 10));
        //cpuTxQ3Button.setText("CPU TX Q3");
        //cpuTxQ3Button.setMargin(new java.awt.Insets(0, 0, 0, 0));
        //cpuTxQ3Button.setMinimumSize(new java.awt.Dimension(0, 0));

        inArbButton.setFont(new java.awt.Font("Dialog", 0, 10));
        inArbButton.setText("Input Arbiter");
        inArbButton.setMargin(new java.awt.Insets(0, 0, 0, 0));
        inArbButton.setMinimumSize(new java.awt.Dimension(0, 0));
        inArbButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                inArbButtonActionPerformed(evt);
            }
        });

        oplButton.setFont(new java.awt.Font("Dialog", 0, 10));
        oplButton.setText("Output Port Lookup");
        oplButton.setMargin(new java.awt.Insets(0, 0, 0, 0));
        oplButton.setMinimumSize(new java.awt.Dimension(0, 0));
        oplButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                oplButtonActionPerformed(evt);
            }
        });

        oqButton.setFont(new java.awt.Font("Dialog", 0, 10));
        oqButton.setText("Output Queues");
        oqButton.setMargin(new java.awt.Insets(0, 0, 0, 0));
        oqButton.setMinimumSize(new java.awt.Dimension(0, 0));
        oqButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                oqButtonActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(this);
        this.setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(macRxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                        //.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        //.addComponent(cpuRxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(macRxQ1Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        //.addComponent(cpuRxQ1Button, javax.swing.GroupLayout.PREFERRED_SIZE, 79, javax.swing.GroupLayout.PREFERRED_SIZE)
                        //.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(macRxQ2Button, javax.swing.GroupLayout.PREFERRED_SIZE, 79, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        //.addComponent(cpuRxQ2Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                        //.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(macRxQ3Button, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
			.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(cpuRxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE))
                        //.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        //.addComponent(cpuRxQ3Button, javax.swing.GroupLayout.PREFERRED_SIZE, 81, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(macTxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                        //.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        //.addComponent(cpuTxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(macTxQ1Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(oqButton, javax.swing.GroupLayout.PREFERRED_SIZE, 164, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 261, Short.MAX_VALUE))
                            .addGroup(layout.createSequentialGroup()
                                //.addComponent(cpuTxQ1Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                                //.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(macTxQ2Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                //.addComponent(cpuTxQ2Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                                //.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(macTxQ3Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
				.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        	.addComponent(cpuTxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE))
                                //.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                //.addComponent(cpuTxQ3Button, javax.swing.GroupLayout.PREFERRED_SIZE, 81, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(inArbButton, javax.swing.GroupLayout.PREFERRED_SIZE, 164, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 261, Short.MAX_VALUE))
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(oplButton, javax.swing.GroupLayout.PREFERRED_SIZE, 164, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 261, Short.MAX_VALUE)))))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    //.addComponent(cpuRxQ3Button, javax.swing.GroupLayout.PREFERRED_SIZE, 48, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(macRxQ3Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    //.addComponent(cpuRxQ2Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(macRxQ2Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    //.addComponent(cpuRxQ1Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(macRxQ1Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(cpuRxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(macRxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(60, 60, 60)
                .addComponent(inArbButton, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(63, 63, 63)
                .addComponent(oplButton, javax.swing.GroupLayout.PREFERRED_SIZE, 46, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(70, 70, 70)
                .addComponent(oqButton, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(65, 65, 65)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    //.addComponent(cpuTxQ3Button, javax.swing.GroupLayout.PREFERRED_SIZE, 48, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(macTxQ3Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    //.addComponent(cpuTxQ2Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(macTxQ2Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    //.addComponent(cpuTxQ1Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(macTxQ1Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(cpuTxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(macTxQ0Button, javax.swing.GroupLayout.PREFERRED_SIZE, 47, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
    }// </editor-fold>//GEN-END:initComponents

    private void oqButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_oqButtonActionPerformed
        OutputQueues oqFrame = new OutputQueues(nf2, updateTimer);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) oqFrame);
    }//GEN-LAST:event_oqButtonActionPerformed

    private void oplButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_oplButtonActionPerformed
        OutputPortLookupFrame oplFrame = new OutputPortLookupFrame(nf2,
                updateTimer);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) oplFrame);
    }//GEN-LAST:event_oplButtonActionPerformed

    private void inArbButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_inArbButtonActionPerformed
// TODO
    }//GEN-LAST:event_inArbButtonActionPerformed

    private void macTxQ3ButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_macTxQ3ButtonActionPerformed
        MACTxQInternalFrame txFrame = new MACTxQInternalFrame(nf2, updateTimer,
                3);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) txFrame);
    }//GEN-LAST:event_macTxQ3ButtonActionPerformed

    private void macTxQ2ButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_macTxQ2ButtonActionPerformed
        MACTxQInternalFrame txFrame = new MACTxQInternalFrame(nf2, updateTimer,
                2);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) txFrame);
    }//GEN-LAST:event_macTxQ2ButtonActionPerformed

    private void macTxQ1ButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_macTxQ1ButtonActionPerformed
        MACTxQInternalFrame txFrame = new MACTxQInternalFrame(nf2, updateTimer,
                1);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) txFrame);
    }//GEN-LAST:event_macTxQ1ButtonActionPerformed

    private void macTxQ0ButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_macTxQ0ButtonActionPerformed
        MACTxQInternalFrame txFrame = new MACTxQInternalFrame(nf2, updateTimer,
                0);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) txFrame);
    }//GEN-LAST:event_macTxQ0ButtonActionPerformed

    private void macRxQ3ButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_macRxQ3ButtonActionPerformed
        MACRxQInternalFrame rxFrame = new MACRxQInternalFrame(nf2, updateTimer,
                3);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) rxFrame);
        // TODO: don't allow multiple instances of the same frame
    }//GEN-LAST:event_macRxQ3ButtonActionPerformed

    private void macRxQ2ButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_macRxQ2ButtonActionPerformed
        MACRxQInternalFrame rxFrame = new MACRxQInternalFrame(nf2, updateTimer,
                2);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) rxFrame);
        // TODO: don't allow multiple instances of the same frame
    }//GEN-LAST:event_macRxQ2ButtonActionPerformed

    private void macRxQ1ButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_macRxQ1ButtonActionPerformed
        MACRxQInternalFrame rxFrame = new MACRxQInternalFrame(nf2, updateTimer,
                1);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) rxFrame);
        // TODO: don't allow multiple instances of the same frame
    }//GEN-LAST:event_macRxQ1ButtonActionPerformed

    private void macRxQ0ButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_macRxQ0ButtonActionPerformed
        MACRxQInternalFrame rxFrame = new MACRxQInternalFrame(nf2, updateTimer,
                0);
        ((MDIDesktopPane) mainFrame.getDesktopPane())
        .add((JInternalFrame) rxFrame);
        // TODO: don't allow multiple instances of the same frame
    }//GEN-LAST:event_macRxQ0ButtonActionPerformed


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton cpuRxQ0Button;
    //private javax.swing.JButton cpuRxQ1Button;
    //private javax.swing.JButton cpuRxQ2Button;
    //private javax.swing.JButton cpuRxQ3Button;
    private javax.swing.JButton cpuTxQ0Button;
    //private javax.swing.JButton cpuTxQ1Button;
    //private javax.swing.JButton cpuTxQ2Button;
    //private javax.swing.JButton cpuTxQ3Button;
    private javax.swing.JButton inArbButton;
    private javax.swing.JButton macRxQ0Button;
    private javax.swing.JButton macRxQ1Button;
    private javax.swing.JButton macRxQ2Button;
    private javax.swing.JButton macRxQ3Button;
    private javax.swing.JButton macTxQ0Button;
    private javax.swing.JButton macTxQ1Button;
    private javax.swing.JButton macTxQ2Button;
    private javax.swing.JButton macTxQ3Button;
    private javax.swing.JButton oplButton;
    private javax.swing.JButton oqButton;
    // End of variables declaration//GEN-END:variables

}