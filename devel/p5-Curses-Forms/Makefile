# Created by: ijliao
# $FreeBSD: head/devel/p5-Curses-Forms/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Curses-Forms
PORTVERSION=	1.997
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	CursesForms-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Provide high level APIs for rapid UI design on the console

LICENSE=	GPLv2

BUILD_DEPENDS=	p5-Curses-Widgets>=0:devel/p5-Curses-Widgets
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
