# Created by: vanhu <vanhu@netasq.com>
# $FreeBSD$

PORTNAME=		scapy
PORTVERSION=		2.4.0
DISTVERSIONPREFIX=	v
CATEGORIES=		net

MAINTAINER=	vanhu@FreeBSD.org
COMMENT=	Powerful interactive packet manipulation program in python

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}libdnet>0:net/py-libdnet@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pcap>0:net/py-pcap@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	autoplist distutils noflavors
USE_GITHUB=	yes
GH_ACCOUNT=	secdev

NO_ARCH=	yes

OPTIONS_DEFINE=	GRAPH IPYTHON P0F_BASE MANUF MATPLOT NMAP PYCRYPTO PYGNUPLOT PYX QUESO_BASE SOX
GRAPH_DESC=		graph generation and visualization
IPYTHON_DESC=		Use IPython (enhanced interactive shell)
MANUF_DESC=		Use MANUF MAC database supplied by wireshark
MATPLOT_DESC=		Install python matplotlibs
NMAP_DESC=		nmap OS signatures database
P0F_BASE_DESC=		p0f OS signatures database
PYCRYPTO_DESC=		Use py-crypto for WEP decoding
PYGNUPLOT_DESC=		Use py-gnuplot wrapper to plot graphs
PYX_DESC=		PostScript and PDF graphs drawing
QUESO_BASE_DESC=	queso OS signatures database
SOX_DESC=		Support for VoIP

GRAPH_RUN_DEPENDS=	${LOCALBASE}/bin/MagickCore-config:graphics/ImageMagick \
			${LOCALBASE}/bin/dot:graphics/graphviz
IPYTHON_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ipython>0:devel/ipython@${PY_FLAVOR}
NMAP_RUN_DEPENDS=	${LOCALBASE}/share/nmap/nmap-os-db:security/nmap
MANUF_RUN_DEPENDS=	${LOCALBASE}/share/wireshark/manuf:net/wireshark
MATPLOT_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}matplotlib>0:math/py-matplotlib@${PY_FLAVOR}
P0F_BASE_RUN_DEPENDS=	${LOCALBASE}/etc/p0f.fp:net-mgmt/p0f
PYCRYPTO_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cryptography>=1.7:security/py-cryptography@${PY_FLAVOR}
PYGNUPLOT_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gnuplot>0:math/py-gnuplot@${PY_FLAVOR}
PYX_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}PyX12>=0.12.1:graphics/py-PyX12@${PY_FLAVOR} \
			${LOCALBASE}/bin/pdftex:print/tex-basic-engines
QUESO_BASE_RUN_DEPENDS=	${LOCALBASE}/etc/queso.conf.sample:net/queso
SOX_RUN_DEPENDS=	${LOCALBASE}/bin/sox:audio/sox

post-patch:
	@${REINPLACE_CMD} "s,share/man/man1,man/man1," ${WRKSRC}/setup.py
	@${REINPLACE_CMD} "s,pdflatex,pdftex," ${WRKSRC}/scapy/extlib.py
	@${REINPLACE_CMD} "s,/usr/share/,${LOCALBASE}/share/," \
		${WRKSRC}/scapy/data.py \
	       	${WRKSRC}/scapy/utils6.py \
		${WRKSRC}/scapy/modules/nmap.py
	@${REINPLACE_CMD} "s,/etc/,${LOCALBASE}/etc/," \
		${WRKSRC}/scapy/modules/p0f.py \
		${WRKSRC}/scapy/modules/queso.py

.include <bsd.port.mk>
