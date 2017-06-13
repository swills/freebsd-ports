# Created by: Alexander Kriventsov <avk@vl.ru>
# $FreeBSD: head/www/py-django-ldapdb/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	django-ldapdb
PORTVERSION=	0.3.2
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	avk@vl.ru
COMMENT=	Support for django models over LDAP

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=1.6.0:www/py-django18 \
		${PYTHON_PKGNAMEPREFIX}ldap>=2.0:net/py-ldap

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
