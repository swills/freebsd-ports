# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_carrier_weight/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_carrier_weight
PORTVERSION=	2.8.2
CATEGORIES=	finance python
MASTER_SITES=	CHEESESHOP \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_carrier_weight-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Carrier Weight Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_product_measurements>=2.8.0:finance/trytond28_product_measurements \
		trytond28_carrier>=2.8.0:finance/trytond28_carrier

CONFLICTS=	trytond_carrier_weight-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
