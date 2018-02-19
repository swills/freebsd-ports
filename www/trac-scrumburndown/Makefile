# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: head/www/trac-scrumburndown/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	scrumburndown
PORTVERSION=	1.9.2
PORTREVISION=	5
CATEGORIES=	www devel python
MASTER_SITES=	http://www.sourcehosting.net/freebsd/distfiles/ \
		LOCAL/glarkin
PKGNAMEPREFIX=	trac-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Plugin to enable Scrum burndown chart capabilities

LICENSE=	APACHE20

RUN_DEPENDS=	tracd:www/trac \
		trac-timingandestimation>=0:www/trac-timingandestimation

WRKSRC=		${WRKDIR}/${PORTNAME}plugin
USES=		python:2.7
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
