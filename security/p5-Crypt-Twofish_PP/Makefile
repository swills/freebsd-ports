# Created by: Konstantin Menshikov <kostjnspb@yandex.ru>
# $FreeBSD: head/security/p5-Crypt-Twofish_PP/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Crypt-Twofish_PP
PORTVERSION=	0.17
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN \
		http://kostjn.spb.ru/freebsd/
PKGNAMEPREFIX=	p5-

MAINTAINER=	kostjnspb@yandex.ru
COMMENT=	The Twofish Algorithm in Pure Perl

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Locale-libintl>=0:devel/p5-Locale-libintl

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
