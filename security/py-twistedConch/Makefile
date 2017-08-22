# Created by: Neal Nelson <neal@nelson.name>
# $FreeBSD: head/security/py-twistedConch/Makefile 448405 2017-08-20 12:29:35Z sunpoet $

PORTNAME=	twistedConch
PORTVERSION=	15.2.1
PORTREVISION=	1
CATEGORIES=	security devel python
MASTER_SITES=	http://twistedmatrix.com/Releases/Conch/${PORTVERSION:R}/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	TwistedConch-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	SSH and SFTP protocol implementation with clients and servers

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyasn1>=0.0.9a:devel/py-pyasn1

DEPRECATED=	Use devel/py-twisted instead
EXPIRATION_DATE=2017-09-30

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils
USES=		python:2 tar:bzip2 twisted

.include <bsd.port.mk>
