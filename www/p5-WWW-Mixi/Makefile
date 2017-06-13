# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: head/www/p5-WWW-Mixi/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	WWW-Mixi
PORTVERSION=	0.50
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module of Automated interface to the Mixi

BUILD_DEPENDS=	p5-libwww>=0:www/p5-libwww \
				ja-p5-Jcode>=0:japanese/p5-Jcode
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
