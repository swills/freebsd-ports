# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/ports-mgmt/distilator/Makefile 478219 2018-08-27 16:28:42Z ehaupt $

PORTNAME=	distilator
PORTVERSION=	1.0
CATEGORIES=	ports-mgmt
MASTER_SITES=	https://critical.ch/distilator/ \
		LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Command-line script to check the availability of a ports distfiles

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.18.4_1:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests-ftp>=0.3.1:ftp/py-requests-ftp@${PY_FLAVOR}

USES=		python shebangfix
NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/distilator

.include <bsd.port.mk>
