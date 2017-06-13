# Created by: ijliao
# $FreeBSD: head/devel/p5-Curses-Application/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Curses-Application
PORTVERSION=	0.2
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	CursesApplication-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Curses application development framework

LICENSE=	GPLv2

BUILD_DEPENDS=	p5-Curses-Forms>=0:devel/p5-Curses-Forms
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
