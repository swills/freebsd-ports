# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: head/net/py-libcloud/Makefile 449249 2017-09-04 14:21:21Z novel $

PORTNAME=	libcloud
PORTVERSION=	2.2.0
CATEGORIES=	net python
MASTER_SITES=	APACHE/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	apache-${PORTNAME}-${PORTVERSION}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Standard client library for many popular cloud providers

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-runner>=0:devel/py-pytest-runner

NO_ARCH=	yes

USES=		cpe python tar:bzip2
USE_PYTHON=	distutils autoplist
CPE_VENDOR=	apache

post-extract:
	@${MV} ${WRKSRC}/libcloud/test ${WRKSRC}/test # no need to install tests

.include <bsd.port.mk>
