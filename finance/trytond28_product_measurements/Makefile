# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_product_measurements/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_product_measurements
PORTVERSION=	2.8.0
PORTREVISION=	1
CATEGORIES=	finance python
MASTER_SITES=	https://pypi.python.org/packages/source/t/trytond_product_measurements/ \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_product_measurements-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Product Measurements Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_product>=2.8.0:finance/trytond28_product

CONFLICTS=	trytond_product_measurements-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
