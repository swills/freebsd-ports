# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD: head/databases/py-django-transaction-hooks/Makefile 463771 2018-03-06 22:45:36Z rene $

PORTNAME=	django-transaction-hooks
PORTVERSION=	0.2
PORTREVISION=	2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Django database backends to register transaction-commit hooks

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>=1.8:www/py-django@${FLAVOR}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
