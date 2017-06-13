# Created by: Douglas Thrift
# $FreeBSD: head/www/trac-TracGoogleAnalytics/Makefile 416081 2016-05-29 01:29:08Z amdmi3 $

PORTNAME=	TracGoogleAnalytics
PORTVERSION=	0.2.4
PORTREVISION=	3
CATEGORIES=	www devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	trac-

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Trac plugin to enable logging by Google Analytics

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	tracd:www/trac \
		${PYTHON_PKGNAMEPREFIX}Genshi>=0.5:textproc/py-genshi
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
