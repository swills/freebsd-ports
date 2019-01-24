# Created by: Pawel Pekala <pawel@FreeBSD.org>
# $FreeBSD: head/net/libmaia/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	libmaia
DISTVERSIONPREFIX=	v
DISTVERSION=	0.9.0
PORTREVISION=	3
CATEGORIES=	net

MAINTAINER=	kde@FreeBSD.org
COMMENT=	XML-RPC lib for Qt

USES=		compiler:c++11-lang gmake qmake qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	wiedi
USE_QT=		buildtools_build network xml

PLIST_FILES=	include/maia/maiaObject.h \
		include/maia/maiaXmlRpcClient.h \
		include/maia/maiaXmlRpcServer.h \
		lib/libmaia.a

post-install:
	${INSTALL_DATA} ${WRKSRC}/maiaObject.h \
		${STAGEDIR}${PREFIX}/include/maia

.include <bsd.port.mk>
