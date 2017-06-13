# $FreeBSD: head/textproc/p5-Text-Patch/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Text-Patch
PORTVERSION=	1.8
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to patch text with given patch

RUN_DEPENDS=	p5-Text-Diff>0:textproc/p5-Text-Diff
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
