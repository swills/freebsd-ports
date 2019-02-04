# $FreeBSD: head/finance/expense/Makefile 492056 2019-02-03 15:37:58Z theraven $

PORTNAME=	expense
PORTVERSION=	0.1
PORTREVISION=	10
CATEGORIES=	finance gnustep
MASTER_SITES=	http://www.eskimo.com/~pburns/Expense/files/
DISTNAME=	Expense-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Application to track your expense under GNUstep

LICENSE=	GPLv2

USES=		gnustep
USE_GNUSTEP=	back build

WRKSRC=		${WRKDIR}/Expense

PORTSCOUT=	ignore:1

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Expense.app/Expense

.include <bsd.port.mk>
