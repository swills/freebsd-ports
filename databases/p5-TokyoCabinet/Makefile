# $FreeBSD: head/databases/p5-TokyoCabinet/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	TokyoCabinet
PORTVERSION=	1.34
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	LOCAL/kuriyama \
		http://fallabs.com/tokyocabinet/perlpkg/
PKGNAMEPREFIX=	p5-
DISTNAME=	tokyocabinet-perl-${PORTVERSION}

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for TokyoCabinet

LIB_DEPENDS=	libtokyocabinet.so:databases/tokyocabinet

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
