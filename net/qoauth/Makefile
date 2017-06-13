# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/net/qoauth/Makefile 437118 2017-03-28 11:03:30Z rakuco $

PORTNAME=	qoauth
PORTVERSION=	2.0.0
DISTVERSIONPREFIX=	v
CATEGORIES=	net devel security

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 4 support for OAuth-powered network services

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libqca.so:devel/qca

USES=		qmake:outsource
USE_LDCONFIG=	yes
USE_QT4=	corelib qtestlib network moc_build

USE_GITHUB=	yes
GH_ACCOUNT=	ayoy

post-patch:
	@${REINPLACE_CMD} -e 's,target.path}/pkgconfig,INSTALL_PREFIX}/libdata/pkgconfig,g' \
		${WRKSRC}/src/src.pro

.include <bsd.port.mk>
