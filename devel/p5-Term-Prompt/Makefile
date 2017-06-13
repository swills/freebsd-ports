# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/devel/p5-Term-Prompt/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Term-Prompt
PORTVERSION=	1.04
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl extension for prompting a user for information

BUILD_DEPENDS=	p5-Term-ReadKey>=0:devel/p5-Term-ReadKey
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
