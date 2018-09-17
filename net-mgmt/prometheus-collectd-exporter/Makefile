# $FreeBSD: head/net-mgmt/prometheus-collectd-exporter/Makefile 479620 2018-09-12 21:52:47Z 0mp $

PORTNAME=	prometheus-collectd-exporter
PORTVERSION=	0.3.1
CATEGORIES=	net-mgmt

MAINTAINER=	dsp@php.net
COMMENT=	Collectd exporter for Prometheus

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go gmake
USE_GITHUB=	yes
GH_ACCOUNT=	prometheus
GH_PROJECT=	collectd_exporter

PLIST_FILES=	bin/prometheus-collectd-exporter

.include <bsd.port.mk>
