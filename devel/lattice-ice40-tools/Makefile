# Created by: Johnny Sorocil <jsorocil@gmail.com>
# $FreeBSD: head/devel/lattice-ice40-tools/Makefile 471848 2018-06-06 14:52:57Z tobik $

PORTNAME=	lattice-ice40-tools
PORTVERSION=	g20180310
CATEGORIES=	devel

MAINTAINER=	jsorocil@gmail.com
COMMENT=	Open source tools for Lattice iCE40 FPGAs

RUN_DEPENDS=	abc:cad/abc \
		arachne-pnr:devel/arachne-pnr \
		icepack:devel/icestorm \
		yosys:devel/yosys

USES=		metaport

OPTIONS_DEFINE=	EXAMPLES

EXAMPLES_DESC=	Build examples for Olimex iCE40 FPGA boards

EXAMPLES_RUN_DEPENDS=	lattice-ice40-examples-hx1k>=g0:devel/lattice-ice40-examples-hx1k \
			lattice-ice40-examples-hx8k>=g0:devel/lattice-ice40-examples-hx8k

.include <bsd.port.mk>
