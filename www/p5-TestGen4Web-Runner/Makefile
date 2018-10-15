# Created by: Conor McDermottroe <ports@mcdermottroe.com>
# $FreeBSD: head/www/p5-TestGen4Web-Runner/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	TestGen4Web-Runner
PORTVERSION=	0.11
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN/WWW/MACKERS
PKGNAMEPREFIX=	p5-

MAINTAINER=	eg@fbsd.lt
COMMENT=	Perl module to replay files recorded with TestGen4Web

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-URI>=0:net/p5-URI \
		p5-XML-Simple>=0:textproc/p5-XML-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
