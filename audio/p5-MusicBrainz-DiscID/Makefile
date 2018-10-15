# Created by: Tobias Rehbein <tobias.rehbein@web.de>
# $FreeBSD: head/audio/p5-MusicBrainz-DiscID/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	MusicBrainz-DiscID
PORTVERSION=	0.04
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	woodsb02@FreeBSD.org
COMMENT=	Perl interface for the MusicBrainz libdiscid library

LICENSE=	GPLv2

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Test-Pod>=0:devel/p5-Test-Pod
LIB_DEPENDS=	libdiscid.so:audio/libdiscid

USES=		localbase pkgconfig perl5
USE_PERL5=	configure

.include <bsd.port.mk>
