# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: head/graphics/p5-Image-Imlib2/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Image-Imlib2
PORTVERSION=	2.03
PORTREVISION=	6
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the Imlib2 image library

LIB_DEPENDS=	libImlib2.so:graphics/imlib2

USES=		perl5
USE_PERL5=	modbuild

OPTIONS_DEFINE=	EXAMPLES

EXAMPLES=	examples/benchmark.pl examples/benchmark.txt examples/maeda.pl

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${EXAMPLES:S|^|${WRKSRC}/|} ${STAGEDIR}${EXAMPLESDIR}
	@${ECHO_MSG} "===> Examples installed in ${EXAMPLESDIR}."

.include <bsd.port.mk>
