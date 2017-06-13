# $FreeBSD: head/sysutils/rubygem-fluent-mixin-plaintextformatter/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	fluent-mixin-plaintextformatter
PORTVERSION=	0.2.2
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Fluentd plugin to include format values into json, tsv or csv

LICENSE=	APACHE20

RUN_DEPENDS=	\
	rubygem-fluentd>0:sysutils/rubygem-fluentd \
	rubygem-ltsv>0:textproc/rubygem-ltsv

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
