# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-Devel-RingBuffer/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Devel-RingBuffer
PORTVERSION=	0.31
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Shared memory ring buffers for Perl scripts diagnosis/debug

RUN_DEPENDS=	p5-IPC-Mmap>=0:devel/p5-IPC-Mmap
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
