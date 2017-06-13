# Created by: darius@dons.net.au
# $FreeBSD: head/devel/tclreadline/Makefile 437354 2017-03-31 13:14:36Z gahr $

PORTNAME=	tclreadline
PORTVERSION=	2.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel tcl

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	GNU readline for TCL

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	flightaware
USES=		autoreconf libtool tcl:tea readline:port
CONFIGURE_ARGS+=--with-tcl-includes=${TCL_INCLUDEDIR} \
		--with-readline-includes=${LOCALBASE}/include \
		--with-readline-library="-L${LOCALBASE}/lib -lreadline"
USE_LDCONFIG=	yes
TCL_PKG=	${PORTNAME}${PORTVERSION}
PLIST_SUB+=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
