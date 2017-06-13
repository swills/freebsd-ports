# Created by: Denis Pokataev <catone@cpan.org>
# $FreeBSD: head/devel/p5-AnyEvent-Run/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	AnyEvent-Run
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Run a process or coderef asynchronously

RUN_DEPENDS=	p5-AnyEvent>=4.15:devel/p5-AnyEvent
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
