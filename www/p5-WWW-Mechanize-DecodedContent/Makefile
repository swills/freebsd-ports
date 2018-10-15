# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: head/www/p5-WWW-Mechanize-DecodedContent/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	WWW-Mechanize-DecodedContent
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIYAGAWA
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Decode Mech content using its HTTP response encoding

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-WWW-Mechanize>=0:www/p5-WWW-Mechanize \
		p5-HTTP-Response-Encoding>=0:www/p5-HTTP-Response-Encoding

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
