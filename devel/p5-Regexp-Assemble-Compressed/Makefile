# $FreeBSD: head/devel/p5-Regexp-Assemble-Compressed/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Regexp-Assemble-Compressed
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to compress Regular Expression

RUN_DEPENDS=	\
	p5-Regexp-Assemble>0:devel/p5-Regexp-Assemble
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
