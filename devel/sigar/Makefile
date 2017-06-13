# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/devel/sigar/Makefile 436567 2017-03-21 07:36:38Z glebius $

PORTNAME=	sigar
PORTVERSION=	1.7.3
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Sigar system information API

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/NOTICE

USE_GITHUB=	yes
GH_ACCOUNT=	amishHammer
GH_TAGNAME=	b5af695

GNU_CONFIGURE=	yes
USES=		autoreconf libtool pkgconfig
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
