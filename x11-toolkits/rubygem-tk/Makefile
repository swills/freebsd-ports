# $FreeBSD: head/x11-toolkits/rubygem-tk/Makefile 491080 2019-01-24 05:09:48Z linimon $

PORTNAME=	tk
PORTVERSION=	0.2.0
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	nmingotti@gmail.com
COMMENT=	Ruby interface to TclTk-8.6

LICENSE=	BSD2CLAUSE

CONFIGURE_ARGS=--with-tcltkversion=8.6,8.6 \
		--with-tk-include=${LOCALBASE}/include/tk8.6 \
		--with-tcl-include=${LOCALBASE}/include/tcl8.6

USES=		gem tk:86
USE_RUBY=	yes
USE_XORG=	x11

.include <bsd.port.mk>
