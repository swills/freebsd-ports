# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/textproc/p5-Text-Query/Makefile 479390 2018-09-10 11:16:59Z des $

PORTNAME=	Text-Query
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Query processing framework

USES=		perl5
USE_PERL5=	configure patch

pre-patch:
	@${PERL} -pi -e 's/factor\(\$$self\)/\&factor(\$$self)/' \
		${WRKSRC}/lib/Text/Query/ParseAdvanced.pm

.include <bsd.port.mk>
