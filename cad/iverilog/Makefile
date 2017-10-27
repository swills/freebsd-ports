# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: head/cad/iverilog/Makefile 452817 2017-10-24 21:01:15Z zeising $

PORTNAME=	iverilog
PORTVERSION=	10.2
CATEGORIES=	cad
MASTER_SITES=	ftp://icarus.com/pub/eda/verilog/v10/
DISTNAME=	verilog-${PORTVERSION}

MAINTAINER=	zeising@FreeBSD.org
COMMENT=	Verilog simulation and synthesis tool

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-suffix

USES=		bison gmake readline

.include <bsd.port.mk>
