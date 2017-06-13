# Created by: clsung@dragon2.net
# $FreeBSD: head/textproc/p5-RTF-Parser/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	RTF-Parser
PORTVERSION=	1.12
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for parsing RTF files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-RTF-Tokenizer>=1.16:textproc/p5-RTF-Tokenizer
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
