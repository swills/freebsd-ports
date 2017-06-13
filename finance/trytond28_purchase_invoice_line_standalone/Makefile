# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_purchase_invoice_line_standalone/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_purchase_invoice_line_standalone
PORTVERSION=	2.8.1
CATEGORIES=	finance python
MASTER_SITES=	CHEESESHOP \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_purchase_invoice_line_standalone-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Purchase Invoice Line Standalone Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_purchase>=2.8.0:finance/trytond28_purchase \
		trytond28_account_invoice_line_standalone>=2.8.0:finance/trytond28_account_invoice_line_standalone

CONFLICTS=	trytond_purchase_invoice_line_standalone-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
