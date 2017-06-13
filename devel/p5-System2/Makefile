# Created by: tobez
# $FreeBSD: head/devel/p5-System2/Makefile 424411 2016-10-21 12:51:40Z mat $

PORTNAME=	System2
PORTVERSION=	0.84
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	System2 - like system(), but with STDERR available as well

USES=		perl5
USE_PERL5=	configure

pre-configure:
	${RM} ${WRKSRC}/io_test.pl

.include <bsd.port.mk>
