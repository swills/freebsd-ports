# Created by: Neal Nelson <neal@nelson.name>
# $FreeBSD: head/textproc/py-twistedLore/Makefile 448406 2017-08-20 12:29:40Z sunpoet $

PORTNAME=	twistedLore
PORTVERSION=	15.2.1
CATEGORIES=	textproc python
MASTER_SITES=	http://twistedmatrix.com/Releases/Lore/${PORTVERSION:R}/ \
		LOCAL/sunpoet
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	TwistedLore-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Documentation generator with HTML and LaTeX support

LICENSE=	MIT

DEPRECATED=	Use devel/py-twisted instead
EXPIRATION_DATE=2017-09-30

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils
USES=		python:2 tar:bzip2 twisted

.include <bsd.port.mk>
