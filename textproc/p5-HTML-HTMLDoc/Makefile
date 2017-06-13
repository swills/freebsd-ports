# Created by: Konstantin Menshikov <kostjnspb@yandex.ru>
# $FreeBSD: head/textproc/p5-HTML-HTMLDoc/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	HTML-HTMLDoc
PORTVERSION=	0.10
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	http://kostjn.spb.ru/freebsd/ \
		CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kostjnspb@yandex.ru
COMMENT=	Perl interface to the htmldoc program

BUILD_DEPENDS=	htmldoc>0:textproc/htmldoc
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
