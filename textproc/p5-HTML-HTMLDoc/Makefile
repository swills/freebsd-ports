# Created by: Konstantin Menshikov <kostjnspb@yandex.ru>
# $FreeBSD: head/textproc/p5-HTML-HTMLDoc/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTML-HTMLDoc
PORTVERSION=	0.10
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	http://kostjn.spb.ru/freebsd/ \
		CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kostjnspb@yandex.ru
COMMENT=	Perl interface to the htmldoc program

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	htmldoc>0:textproc/htmldoc

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
