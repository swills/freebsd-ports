# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_ldap_connection/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_ldap_connection
PORTVERSION=	2.8.0
PORTREVISION=	2
CATEGORIES=	finance python
MASTER_SITES=	https://pypi.python.org/packages/source/t/trytond_ldap_connection/ \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_ldap_connection-${PORTVERSION}

MAINTAINER=	matthias@petermann.it
COMMENT=	Tryton Application Platform (LDAP Connection Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28>=2.8.2:finance/trytond28 \
		${PYTHON_PKGNAMEPREFIX}ldap>=2.4.10:net/py-ldap

CONFLICTS=	trytond_ldap_connection-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
