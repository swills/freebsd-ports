# Created by: Sebastien Santoro <dereckson@gmail.com>
# $FreeBSD: head/net/tclsoap/Makefile 457255 2017-12-25 20:20:13Z tijl $

PORTNAME=	tclsoap
PORTVERSION=	1.6.7
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/TclSOAP-${PORTVERSION}
DISTNAME=	TclSOAP-${PORTVERSION}

MAINTAINER=	dereckson@gmail.com
COMMENT=	SOAP and XML-RPC support for TCL library

LICENSE=	MIT

RUN_DEPENDS=	${LOCALBASE}/lib/TclxmlConfig.sh:devel/tclxml

GNU_CONFIGURE=	yes
USES=		tcl:wrapper,build
WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION}

.include <bsd.port.mk>
