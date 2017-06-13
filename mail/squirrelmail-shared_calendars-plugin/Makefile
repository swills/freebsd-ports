# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: head/mail/squirrelmail-shared_calendars-plugin/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	shared_calendars
PORTVERSION=	2.0.1
PORTREVISION=	3
CATEGORIES=	mail www
DISTNAME=	${PORTNAME}-${PORTVERSION}-1.4.0

MAINTAINER=	ports@FreeBSD.org
COMMENT=	iCal-compliant calendaring for SquirrelMail

RUN_DEPENDS=	squirrelmail-calendar_file_backend-plugin>0:mail/squirrelmail-calendar_file_backend-plugin

USE_SM_COMPAT=	yes
USE_GENERIC_PKGMESSAGE=	yes
_SMSRCDIR=	calendar

.include "${.CURDIR}/../squirrelmail/bsd.squirrelmail.mk"
.include <bsd.port.mk>
