# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD: head/finance/trytond28_account_invoice_line_standalone/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	trytond28_account_invoice_line_standalone
PORTVERSION=	2.8.0
PORTREVISION=	1
CATEGORIES=	finance python
MASTER_SITES=	https://pypi.python.org/packages/source/t/trytond_account_invoice_line_standalone/ \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_account_invoice_line_standalone-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Account Invoice Line Standalone Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_account_invoice>=2.8.2:finance/trytond28_account_invoice

CONFLICTS=	trytond_account_invoice_line_standalone-2.[46].*

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
