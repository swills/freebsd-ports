# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_account_product/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_account_product
PORTVERSION=	2.8.0
PORTREVISION=	1
CATEGORIES=	finance python
MASTER_SITES=	https://pypi.python.org/packages/source/t/trytond_account_product/ \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_account_product-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Account Product Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_account>=2.8.1:finance/trytond28_account \
		trytond28_product>=2.8.0:finance/trytond28_product

CONFLICTS=	trytond_account_product-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
